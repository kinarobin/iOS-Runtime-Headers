/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebDeviceOrientationInternal : NSObject {
    struct RefPtr<WebCore::DeviceOrientationData> { 
        struct DeviceOrientationData {} *m_ptr; 
    } m_orientation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoreDeviceOrientation:(struct PassRefPtr<WebCore::DeviceOrientationData> { struct DeviceOrientationData {} *x1; })arg1;

@end