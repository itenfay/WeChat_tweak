//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, TextStateCardReporter;

@interface TextStatePublishOperateUseCase : NSObject
{
    _Bool _shouldShowRedDotForPublish;
    TextStateCardReporter *_cardReporter;
    NSString *_passthroughIconId;
    CDUnknownBlockType _onDeleteSuccessHandler;
    NSString *_educationDescForPublish;
    CDUnknownBlockType _textStateDynamicGetter;
    MMUIViewController *_curViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *curViewController; // @synthesize curViewController=_curViewController;
@property(copy, nonatomic) CDUnknownBlockType textStateDynamicGetter; // @synthesize textStateDynamicGetter=_textStateDynamicGetter;
@property(copy, nonatomic) NSString *educationDescForPublish; // @synthesize educationDescForPublish=_educationDescForPublish;
@property(nonatomic) _Bool shouldShowRedDotForPublish; // @synthesize shouldShowRedDotForPublish=_shouldShowRedDotForPublish;
@property(copy, nonatomic) CDUnknownBlockType onDeleteSuccessHandler; // @synthesize onDeleteSuccessHandler=_onDeleteSuccessHandler;
@property(copy, nonatomic) NSString *passthroughIconId; // @synthesize passthroughIconId=_passthroughIconId;
@property(retain, nonatomic) TextStateCardReporter *cardReporter; // @synthesize cardReporter=_cardReporter;
- (id)getSelfCurrentDisplayTextStateModel;
- (void)__publishOrEditTextState:(id)arg1;
- (void)editCurrentTextState;
- (void)publishNewTextState;
- (void)popupActionSheet:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

