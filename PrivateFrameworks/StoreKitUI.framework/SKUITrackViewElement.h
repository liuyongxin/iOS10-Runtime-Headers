/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIActionsViewElement;

@interface SKUITrackViewElement : SKUIViewElement  {
    BOOL _enabled;
    bool_selected;
}

@property(getter=isSelected,readonly) bool selected;
@property(readonly) SKUIActionsViewElement * swipeActions;


- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)swipeActions;
- (void)enumerateChildrenUsingBlock:(id)arg1;
- (bool)isEnabled;
- (bool)isSelected;

@end