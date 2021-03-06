/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBTree, UIView;

@interface UIKeyboardLayoutCursor : UIKeyboardLayoutStar {
    UIKBTree *_indirectKeyboard;
    int _selectedKeyIndex;
    UIView *_selectionView;
    BOOL _suppressOperations;
    BOOL _useGridSelection;
}

@property(readonly) UIKBTree * currentKey;

+ (id)carKeyboardNameForKeyboard:(id)arg1 screenTraits:(id)arg2;
+ (struct CGSize { float x1; float x2; })keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2;

- (void)_handleKeyUIEvent:(id)arg1;
- (BOOL)_handleMoveWithEvent:(id)arg1;
- (BOOL)_handlePhysicalButtonEvent:(id)arg1;
- (BOOL)_handlePhysicalKeyDownWithEvent:(id)arg1;
- (BOOL)_handleRemoteControlReceivedWithEvent:(id)arg1;
- (BOOL)_handleWheelChangedWithEvent:(id)arg1;
- (void)_moveWithEvent:(id)arg1;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_wheelChangedWithEvent:(id)arg1;
- (int)activeStateForKey:(id)arg1;
- (id)cacheTokenForKeyplane:(id)arg1;
- (BOOL)canHandleEvent:(id)arg1;
- (id)currentKey;
- (int)cursorLocation;
- (void)deactivateCurrentKey;
- (void)dealloc;
- (int)enabledStateForKey:(id)arg1;
- (void)flushKeyCache:(id)arg1;
- (BOOL)handleLinearDirectionalInput:(int)arg1;
- (BOOL)handleVisualDirectionalInput:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)keyIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyplaneKeyForCurrentKeyplane;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)runWithSuppressedActions:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionFrameForKeyIndex:(int)arg1;
- (void)setCursorLocation:(int)arg1;
- (void)setHighlightedVariantIndex:(int)arg1 key:(id)arg2;
- (void)setKeyboardAppearance:(int)arg1;
- (void)setKeyboardName:(id)arg1 appearance:(int)arg2;
- (void)setKeyplaneName:(id)arg1;
- (void)setSelectedKeyIndex:(int)arg1;
- (BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (void)takeKeyAction:(id)arg1;
- (unsigned int)targetEdgesForScreenGestureRecognition;
- (void)updateSelectionForCurrentKeyplane;
- (void)updateStatesForGridSelection;

@end
