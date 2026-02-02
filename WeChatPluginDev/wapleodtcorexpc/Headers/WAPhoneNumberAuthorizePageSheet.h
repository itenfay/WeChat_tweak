//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAAuthorizeResultInfo, WAPhoneNumberAuthorizeSheetInfo, WAPhoneNumberPageSheetViewModel;
@protocol WAPhoneNumberAuthorizePageSheetDelegate;

@interface WAPhoneNumberAuthorizePageSheet
{
    long long _selectedIndex;
    WAPhoneNumberPageSheetViewModel *_pnViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPhoneNumberPageSheetViewModel *pnViewModel; // @synthesize pnViewModel=_pnViewModel;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (id)subViewModel;
- (id)customSubviewClassList;
- (void)togglePhone:(id)arg1;
- (void)managePhoneNumber;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType acceptAction;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(nonatomic) __weak id <WAPhoneNumberAuthorizePageSheetDelegate> authDelegate; // @dynamic authDelegate;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WAPhoneNumberAuthorizeSheetInfo *info; // @dynamic info;
@property(copy, nonatomic) CDUnknownBlockType rejectAction;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WAAuthorizeResultInfo",?,R,N

@property(readonly) Class superclass;

@end

