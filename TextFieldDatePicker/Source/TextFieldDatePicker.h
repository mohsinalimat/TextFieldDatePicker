//
//  TextFieldDatePicker.h
//  TextFieldDatePicker
//
//  Created by Aryan Gh on 6/18/13.
//  Copyright (c) 2013 Aryan Ghassemi. All rights reserved.
//
// https://github.com/aryaxt/TextFieldDatePicker
//
// Permission to use, copy, modify and distribute this software and its documentation
// is hereby granted, provided that both the copyright notice and this permission
// notice appear in all copies of the software, derivative works or modified versions,
// and any portions thereof, and that both notices appear in supporting documentation,
// and that credit is given to Aryan Ghassemi in all documents and publicity
// pertaining to direct or indirect use of this code or its derivatives.
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>
#import "DatePickerViewController.h"

@class TextFieldDatePicker;
@protocol TextFieldDatePickerDelegate <UITextFieldDelegate>
- (void)textFieldDatePicker:(TextFieldDatePicker *)textFieldDatePicker didSelectDate:(NSDate *)date;
@end

@interface TextFieldDatePicker : UITextField <DatePickerViewControllerDelegate, UIPopoverControllerDelegate>

@property (nonatomic, weak) IBOutlet id <TextFieldDatePickerDelegate> delegate;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSDate *minDate;
@property (nonatomic, strong) NSDate *maxDate;
@property (nonatomic, strong) NSDateFormatter *dateFormatter;
@property (nonatomic, assign) UIDatePickerMode *datePickerMode;

@end
