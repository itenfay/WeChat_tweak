//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRecommendAccountData, BTRecommendAppMsg, NSString;

@interface BTBaseRecommendAppMsgCellViewModel
{
    unsigned int _accountIndex;
    unsigned int _appMsgIndex;
}

+ (id)classNameArr;
+ (_Bool)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
+ (id)createModelWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;
@property(readonly, nonatomic) unsigned int appMsgIndex; // @synthesize appMsgIndex=_appMsgIndex;
@property(readonly, nonatomic) unsigned int accountIndex; // @synthesize accountIndex=_accountIndex;
@property(readonly, nonatomic) _Bool isShowLargeCover;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *coverUrl;
- (id)contact;
@property(readonly, nonatomic) BTRecommendAppMsg *appMsg;
@property(readonly, nonatomic) BTRecommendAccountData *accountData;
- (void)updateCellHeight:(double)arg1;
- (void)updateWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;

@end

