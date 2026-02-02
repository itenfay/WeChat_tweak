//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSDate, NSMutableArray, UIButton;
@protocol MMAssetCellDelegate;

@interface MMAssetCell : UITableViewCell
{
    _Bool _bPickerStyleForFile;
    _Bool _showAddButton;
    _Bool _showCameraButton;
    id <MMAssetCellDelegate> _delegate;
    NSMutableArray *_rowAssets;
    UIButton *_addButton;
    UIButton *_cameraButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(nonatomic) _Bool showCameraButton; // @synthesize showCameraButton=_showCameraButton;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) _Bool showAddButton; // @synthesize showAddButton=_showAddButton;
@property(nonatomic) _Bool bPickerStyleForFile; // @synthesize bPickerStyleForFile=_bPickerStyleForFile;
@property(retain, nonatomic) NSMutableArray *rowAssets; // @synthesize rowAssets=_rowAssets;
@property(nonatomic) __weak id <MMAssetCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (id)lastVisibleAssetView;
- (_Bool)isCameraButtonEnable;
- (void)enableCameraButton:(_Bool)arg1;
- (void)onCameraButtonClick:(id)arg1;
- (void)checkInitCameraButton;
- (void)setShowCameraButton:(_Bool)arg1 size:(struct CGSize)arg2;
- (void)onAddButtonClick:(id)arg1;
- (void)checkInitAddButton;
- (void)setShowAddButton:(_Bool)arg1 size:(struct CGSize)arg2;
- (void)doFadeInAnimationWithOrder:(long long)arg1;
@property(readonly, nonatomic) NSDate *assetDate;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

