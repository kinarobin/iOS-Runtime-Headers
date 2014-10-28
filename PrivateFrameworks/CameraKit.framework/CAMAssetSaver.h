/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSMutableArray, NSMutableDictionary;

@interface CAMAssetSaver : NSObject {
    NSMutableDictionary *__inProgressAvalancheFileDescriptors;
    NSMutableDictionary *__inProgressNebulaFileDescriptors;
    NSMutableDictionary *__inflightAssets;
    NSMutableArray *__pendingImageJobs;
    NSMutableArray *__transientStillImageResponses;
}

@property(retain) NSMutableDictionary * _inProgressAvalancheFileDescriptors;
@property(retain) NSMutableDictionary * _inProgressNebulaFileDescriptors;
@property(readonly) NSMutableDictionary * _inflightAssets;
@property(retain) NSMutableArray * _pendingImageJobs;
@property(readonly) NSMutableArray * _transientStillImageResponses;

+ (void)resetNebulaCaptureIsBusy;
+ (void)setNebulaCaptureIsBusy:(BOOL)arg1;
+ (void)setTakingPhotoIsBusy:(BOOL)arg1;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (id)sharedAssetSaver;
+ (id)takingNebulaIndicatorFilePath;
+ (id)takingPhotoIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;

- (void).cxx_destruct;
- (id)_addInflightAssetWithPath:(id)arg1 thumbnailImage:(id)arg2 assetUUID:(id)arg3 metadata:(id)arg4 assetType:(short)arg5 kind:(short)arg6 kindSubtype:(short)arg7 avalancheUUID:(id)arg8 completionHandler:(id)arg9;
- (id)_addInflightAssetWithPath:(id)arg1 withUUID:(id)arg2 avalancheUUID:(id)arg3;
- (id)_imageJobForStillImageCaptureResponse:(id)arg1;
- (id)_inProgressAvalancheFileDescriptors;
- (id)_inProgressNebulaFileDescriptors;
- (id)_inflightAssets;
- (id)_pendingImageJobs;
- (id)_saveIsolationQueue;
- (void)_setIsTakingPhoto:(BOOL)arg1;
- (id)_transientStillImageResponses;
- (void)batchSavePendingAssetJobs;
- (void)dropAllTransientResponses;
- (id)enqueueTransientResponse:(id)arg1 requestEnqueuedBlock:(id)arg2 completionBlock:(id)arg3;
- (id)init;
- (void)queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(id)arg3 completionBlock:(id)arg4 imageSurface:(struct __IOSurface { }*)arg5 previewImageSurface:(struct __IOSurface { }*)arg6 transient:(BOOL)arg7;
- (void)queueJobDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)requestAssetSavingAccess;
- (void)resetAllNebulaProgress;
- (void)saveAllTransientResponses;
- (void)saveAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 bestAssetUUIDs:(id)arg3 stackAssetUUID:(id)arg4 completionBlock:(id)arg5;
- (id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 diagnostics:(id)arg4 previouslyPendingAsset:(id)arg5 requestEnqueuedBlock:(id)arg6;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(id)arg4;
- (void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(BOOL)arg4 isSlalom:(BOOL)arg5 videoHandler:(id)arg6 requestEnqueuedBlock:(id)arg7 completionBlock:(id)arg8;
- (id)saveStillImageCaptureResponse:(id)arg1 requestEnqueuedBlock:(id)arg2 completionBlock:(id)arg3;
- (void)saveTimelapseCaptureResponse:(id)arg1 requestEnqueuedBlock:(id)arg2 completionBlock:(id)arg3;
- (id)saveVideoCaptureResponse:(id)arg1 assetUUID:(id)arg2 jobTypeOverride:(id)arg3 requestEnqueuedBlock:(id)arg4;
- (void)setAvalancheInProgress:(BOOL)arg1 uuid:(id)arg2;
- (void)setNebulaInProgress:(BOOL)arg1 uuid:(id)arg2;
- (void)set_inProgressAvalancheFileDescriptors:(id)arg1;
- (void)set_inProgressNebulaFileDescriptors:(id)arg1;
- (void)set_pendingImageJobs:(id)arg1;

@end