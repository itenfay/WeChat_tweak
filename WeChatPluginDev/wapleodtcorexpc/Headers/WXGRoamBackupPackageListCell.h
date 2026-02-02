//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class AffRoamTransferStats, MMProgressView, MMUIActivityIndicatorView, NSString, SightIconView, UIButton, UIImageView, UILabel, UIView, WXGRoamBackupPackageDetailCell;

@interface WXGRoamBackupPackageListCell : UITableViewCell
{
    _Bool _bLastActivity;
    _Bool _bTopLastActivity;
    _Bool _isShowDetail;
    _Bool _isDeleted;
    float _backupProgress;
    UIView *_blockView;
    UIView *_topView;
    UIView *_bottomView;
    UIView *_mainView;
    UIView *_seperator;
    WXGRoamBackupPackageDetailCell *_managerCell;
    WXGRoamBackupPackageDetailCell *_autoCell;
    WXGRoamBackupPackageDetailCell *_restoreCell;
    UIView *_mainIconBackgroundView;
    UIImageView *_mainIconView;
    UILabel *_mainTitleLabel;
    UILabel *_mainSubTitleLabel;
    UIButton *_mainBtn;
    UIButton *_mainSubBtn;
    MMProgressView *_progressView;
    UILabel *_progressLabel;
    MMUIActivityIndicatorView *_indicatorView;
    UIImageView *_iconView;
    UIImageView *_autoArrowImg;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_leftLabel;
    UIButton *_detailBtn;
    UIView *_labelIconView;
    UIButton *_rightBtn;
    double _cellHeight;
    double _cellWidth;
    CDUnknownBlockType _reloadBlock;
    CDUnknownBlockType _updateHeightBlock;
    unsigned long long _cellIndex;
    AffRoamTransferStats *_curStat;
    NSString *_speedString;
    NSString *_leftTimeString;
    unsigned long long _curSpeed;
    unsigned long long _costTime;
    unsigned long long _speedCount;
    unsigned long long _selectedSize;
    unsigned long long _transferSize;
    SightIconView *_sightIconView;
    struct _NSRange _linkRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(nonatomic) struct _NSRange linkRange; // @synthesize linkRange=_linkRange;
@property(nonatomic) unsigned long long transferSize; // @synthesize transferSize=_transferSize;
@property(nonatomic) unsigned long long selectedSize; // @synthesize selectedSize=_selectedSize;
@property(nonatomic) unsigned long long speedCount; // @synthesize speedCount=_speedCount;
@property(nonatomic) unsigned long long costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned long long curSpeed; // @synthesize curSpeed=_curSpeed;
@property(nonatomic) float backupProgress; // @synthesize backupProgress=_backupProgress;
@property(retain, nonatomic) NSString *leftTimeString; // @synthesize leftTimeString=_leftTimeString;
@property(retain, nonatomic) NSString *speedString; // @synthesize speedString=_speedString;
@property(retain, nonatomic) AffRoamTransferStats *curStat; // @synthesize curStat=_curStat;
@property(nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(copy, nonatomic) CDUnknownBlockType updateHeightBlock; // @synthesize updateHeightBlock=_updateHeightBlock;
@property(copy, nonatomic) CDUnknownBlockType reloadBlock; // @synthesize reloadBlock=_reloadBlock;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isShowDetail; // @synthesize isShowDetail=_isShowDetail;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIView *labelIconView; // @synthesize labelIconView=_labelIconView;
@property(retain, nonatomic) UIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *autoArrowImg; // @synthesize autoArrowImg=_autoArrowImg;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool bTopLastActivity; // @synthesize bTopLastActivity=_bTopLastActivity;
@property(nonatomic) _Bool bLastActivity; // @synthesize bLastActivity=_bLastActivity;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) MMProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *mainSubBtn; // @synthesize mainSubBtn=_mainSubBtn;
@property(retain, nonatomic) UIButton *mainBtn; // @synthesize mainBtn=_mainBtn;
@property(retain, nonatomic) UILabel *mainSubTitleLabel; // @synthesize mainSubTitleLabel=_mainSubTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIImageView *mainIconView; // @synthesize mainIconView=_mainIconView;
@property(retain, nonatomic) UIView *mainIconBackgroundView; // @synthesize mainIconBackgroundView=_mainIconBackgroundView;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *restoreCell; // @synthesize restoreCell=_restoreCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *autoCell; // @synthesize autoCell=_autoCell;
@property(retain, nonatomic) WXGRoamBackupPackageDetailCell *managerCell; // @synthesize managerCell=_managerCell;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *blockView; // @synthesize blockView=_blockView;
- (void)onRoamBackupPackageServiceStopFinishRet:(int)arg1 packageID:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceDeleteProgress:(unsigned long long)arg1 progress:(float)arg2;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)arg1 stats:(id)arg2;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onRoamBackupPackageServiceBackupRestoreConflict:(_Bool)arg1;
- (void)onPressEndBtn;
- (void)pauseAutoBackup24h;
- (void)onCancelPrepare;
- (void)onIgnoreAutoBackupFail;
- (void)onNotiryToNormal;
- (void)onCancelUsingState;
- (void)onTapDetail;
- (void)onTapCancel;
- (void)onTapStop;
- (void)onTapResume;
- (void)onTapPause;
- (void)onStartRestore;
- (void)onTapBackup;
- (void)onTapManager;
- (void)onTapRestore;
- (void)onTapAuto;
- (void)onTapDelete;
- (void)onTapChangeConnection:(id)arg1;
- (void)onTapLearnDetail:(id)arg1;
- (void)onTapChangeBackupRange:(id)arg1;
- (unsigned long long)getCharacterIndex:(id)arg1;
- (_Bool)isNeedToShowToast:(_Bool)arg1;
- (void)analysisStat:(id)arg1;
- (void)onGetTransferStat;
- (void)updateView;
- (void)addProgressView;
- (void)addGreyButton;
- (void)addGreenButton;
- (void)addSmallTipsLabel;
- (void)addTipsLabel;
- (void)addIconImageView;
- (void)updateTopSubView;
- (void)updateBottomViewEnable;
- (void)setupBottomView;
- (void)setupTopView;
- (void)willEndDisplay;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

