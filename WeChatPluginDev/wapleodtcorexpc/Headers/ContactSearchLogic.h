//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol ContactSearchLogicDelegate;

@interface ContactSearchLogic : NSObject
{
    unsigned int m_uiQRFromScene;
    unsigned int m_uiThirdFromScene;
    NSString *_openIMContactUrl;
    id <ContactSearchLogicDelegate> _delegate;
}

+ (void)fillToSearchReq:(id)arg1 fromContext:(id)arg2;
+ (void)fillToCContact:(id)arg1 from:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *openIMContactUrl; // @synthesize openIMContactUrl=_openIMContactUrl;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSearchOpenIMContactResp:(id)arg1;
- (void)searchOpenIMContactWithPhoneNumber:(id)arg1;
- (void)searchOpenIMContactForThirdWithDic:(id)arg1 scene:(unsigned int)arg2 spamContext:(id)arg3 context:(id)arg4 extInfo:(id)arg5;
- (void)searchOpenIMContactForThird:(id)arg1 scene:(unsigned int)arg2 spamContext:(id)arg3 context:(id)arg4 extInfo:(id)arg5;
- (void)qrSearchOpenIMContact:(id)arg1 FromScene:(unsigned int)arg2 a8keyScene:(unsigned int)arg3 subScene:(unsigned int)arg4 context:(id)arg5;

@end

