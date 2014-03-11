/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputMediaDataRequester, AVFigAssetWriterTrack;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {
    AVFigAssetWriterTrack *_assetWriterTrack;
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
}

@property(getter=_assetWriterTrack,readonly) AVFigAssetWriterTrack * assetWriterTrack;

+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;

- (id)_assetWriterTrack;
- (void)_attachToMediaDataRequester:(id)arg1;
- (void)_detachFromMediaDataRequester:(id)arg1;
- (void)_nudgeMediaDataRequesterIfAppropriate;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id*)arg3;
- (id)initWithConfigurationState:(id)arg1;
- (BOOL)isReadyForMoreMediaData;
- (void)markAsFinished;
- (BOOL)mediaDataRequesterShouldRequestMediaData:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (void)prepareToEndSession;
- (BOOL)prepareToFinishWritingReturningError:(id*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (int)status;
- (int)trackID;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg1;

@end