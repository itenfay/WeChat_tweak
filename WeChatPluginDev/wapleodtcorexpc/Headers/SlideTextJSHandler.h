//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol SlideTextDelegate;

@interface SlideTextJSHandler
{
    NSString *_fullText;
    long long _currentCharLength;
    long long _maxCharLength;
    id <SlideTextDelegate> _slideTextDelegate;
    struct _NSRange _selectedRange;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SlideTextDelegate> slideTextDelegate; // @synthesize slideTextDelegate=_slideTextDelegate;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(nonatomic) long long maxCharLength; // @synthesize maxCharLength=_maxCharLength;
@property(nonatomic) long long currentCharLength; // @synthesize currentCharLength=_currentCharLength;
@property(retain, nonatomic) NSString *fullText; // @synthesize fullText=_fullText;
- (_Bool)onJsApiHandlerForwardDealWithFunc:(id)arg1 params:(id)arg2 callbackID:(id)arg3;
- (unsigned long long)getLocalJSBusinessType;

@end

