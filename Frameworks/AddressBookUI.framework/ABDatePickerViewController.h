/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIDatePicker, <ABDatePickerViewControllerDismissDelegate>;

@interface ABDatePickerViewController : UIViewController  {
    void *_context;
    UIDatePicker *_datePicker;
    <ABDatePickerViewControllerDismissDelegate> *_dismissDelegate;
}

@property void* context;
@property(retain) UIDatePicker * datePicker;
@property <ABDatePickerViewControllerDismissDelegate> * dismissDelegate;

+ (struct CGSize { float x1; float x2; })datePickerSize;

- (void)dealloc;
- (id)dismissDelegate;
- (void)setDismissDelegate:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)setContext:(void*)arg1;
- (void*)context;
- (void)setDatePicker:(id)arg1;
- (id)datePicker;
- (float)ab_heightToFitForViewInPopoverView;

@end