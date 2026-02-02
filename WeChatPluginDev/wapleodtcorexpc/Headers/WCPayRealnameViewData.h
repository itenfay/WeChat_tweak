//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, SpecialFindPwdInfo;

@interface WCPayRealnameViewData : NSObject
{
    _Bool _assignUserPay;
    NSArray *_supportCredList;
    NSArray *_professions;
    NSArray *_unSupportNationList;
    NSArray *_controlData;
    SpecialFindPwdInfo *_specialFindPwdInfo;
}

- (void).cxx_destruct;
@property(retain) SpecialFindPwdInfo *specialFindPwdInfo; // @synthesize specialFindPwdInfo=_specialFindPwdInfo;
@property(retain) NSArray *controlData; // @synthesize controlData=_controlData;
@property(retain) NSArray *unSupportNationList; // @synthesize unSupportNationList=_unSupportNationList;
@property(retain) NSArray *professions; // @synthesize professions=_professions;
@property(retain) NSArray *supportCredList; // @synthesize supportCredList=_supportCredList;
@property _Bool assignUserPay; // @synthesize assignUserPay=_assignUserPay;
- (id)init;

@end

