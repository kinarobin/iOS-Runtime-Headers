/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */



@interface SCROCallback : NSObject <NSCoding>
{
    NSInteger _key;
    id _object;
    BOOL _isAtomic;
}


- (NSInteger)key;
- (id)object;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setIsAtomic:(BOOL)arg1;
- (BOOL)isAtomic;
- (void)postToHandler:(id)arg1;
- (id)initWithKey:(NSInteger)arg1 object:(id)arg2;

@end