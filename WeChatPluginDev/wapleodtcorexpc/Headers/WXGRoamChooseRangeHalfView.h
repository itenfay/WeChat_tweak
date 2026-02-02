//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UIView, WXGRoamBackupPackageDetailCell;

@interface WXGRoamChooseRangeHalfView
{
    _Bool _isUpdate;
    WXGRoamBackupPackageDetailCell *_selectAllView;
    UIView *_selectTypeView;
    WXGRoamBackupPackageDetailCell *_selectUsersView;
    unsigned long long _curSelectedType;
    UIImageView *_selectImg;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUpdate; // @synthesize isUpdate=_isUpdate;
@property(retain, nonatomic) UIImageView *selectImg; // @synthesize selectImg=_selectImg;
@property(nonatomic) unsigned long long curSelectedType; // @synthesize curSelectedType=_curSelectedType;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *selectUsersView; // @synthesize selectUsersView=_selectUsersView;
@property(retain, nonatomic) UIView *selectTypeView; // @synthesize selectTypeView=_selectTypeView;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *selectAllView; // @synthesize selectAllView=_selectAllView;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (void)showSelected;
- (void)addAllAction;
- (void)setupView;
- (void)setupSelectedData;
- (id)initWithIsUpdate:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

