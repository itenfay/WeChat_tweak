//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, MMRegionCodeMgr, MMTableView, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIViewController;
@protocol MMRegionPickerReturnDelegate, MMRegionPickerViewControllerDelegate;

@interface MMRegionPickerViewController
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_dataDict;
    NSMutableArray *m_dataAry;
    _Bool m_isInitRegionCode;
    NSString *m_selectedRegionCode;
    MMRegionCodeMgr *m_regionCodeMgr;
    NSArray *arrCurRegionCodes;
    LocationRetriever *_locationRetriever;
    int m_iLocationRetrieveResult;
    NSMutableArray *m_arrServerReturnCode;
    _Bool m_bInCurrent;
    NSIndexPath *m_oCurrentIndexPath;
    _Bool _isTopLevel;
    int _regionType;
    UIViewController *topController;
    id <MMRegionPickerViewControllerDelegate> _delegate;
    id <MMRegionPickerReturnDelegate> _returnDelegate;
    NSMutableArray *_pickedRegionAry;
    unsigned long long _authScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene=_authScene;
@property(nonatomic) int regionType; // @synthesize regionType=_regionType;
@property(retain, nonatomic) NSMutableArray *pickedRegionAry; // @synthesize pickedRegionAry=_pickedRegionAry;
@property(nonatomic) __weak id <MMRegionPickerReturnDelegate> returnDelegate; // @synthesize returnDelegate=_returnDelegate;
@property(retain, nonatomic) NSArray *arrCurRegionCodes; // @synthesize arrCurRegionCodes;
@property(retain, nonatomic) NSString *selectedRegionCode; // @synthesize selectedRegionCode=m_selectedRegionCode;
@property(nonatomic) __weak id <MMRegionPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isTopLevel; // @synthesize isTopLevel=_isTopLevel;
@property(nonatomic) __weak UIViewController *topController; // @synthesize topController;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)OnNeedReturn;
- (void)clarifyCurrentPickedRegionsWith:(id)arg1;
- (id)headerLabelWithTitle:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)isLocationSection:(long long)arg1;
- (_Bool)isLocationRetrieving;
- (void)scrollToRegion:(id)arg1;
- (void)OnDone;
- (void)OnReturn;
- (void)OnDataChange;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)tryRetrieveLocation;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initTableView;
- (void)initData;
- (id)initWithArray:(id)arg1 withAuthScene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

