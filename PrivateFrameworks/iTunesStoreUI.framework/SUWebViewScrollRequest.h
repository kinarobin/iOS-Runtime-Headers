/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUWebViewScrollDelegate>, SUDOMElement;



@interface SUWebViewScrollRequest : NSObject 
{
    BOOL _animated;
    SUDOMElement *_element;
    <SUWebViewScrollDelegate> *_scrollDelegate;
}

@property(retain) <SUWebViewScrollDelegate> *scrollDelegate;
@property(retain) SUDOMElement *element;
@property BOOL animated;


- (id)element;
- (id)scrollDelegate;
- (void)setScrollDelegate:(id)arg1;
- (void)setElement:(id)arg1;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (void)dealloc;

@end