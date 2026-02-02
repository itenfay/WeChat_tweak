//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentBottomSwipeInfo
{
    int _swipeActionType;
    NSString *_swipeText;
    NSString *_jumpUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) int swipeActionType; // @synthesize swipeActionType=_swipeActionType;
@property(retain, nonatomic) NSString *swipeText; // @synthesize swipeText=_swipeText;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

