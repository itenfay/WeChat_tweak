//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, SystemImagePickViewController;
@protocol SystemImagePickViewControllerDelegate;

@interface LiteAppAlbumViewImpl : UIView
{
    _Bool _autoHeight;
    _Bool _autoWidth;
    _Bool _disableLayoutSubview;
    _Bool _isRealAppear;
    SystemImagePickViewController *_vc;
    NSString *_appId;
    NSString *_albumid;
    NSString *_type;
    NSString *_mode;
    unsigned long long _countLimit;
    id <SystemImagePickViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRealAppear; // @synthesize isRealAppear=_isRealAppear;
@property(nonatomic) __weak id <SystemImagePickViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *albumid; // @synthesize albumid=_albumid;
@property(nonatomic) _Bool disableLayoutSubview; // @synthesize disableLayoutSubview=_disableLayoutSubview;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) SystemImagePickViewController *vc; // @synthesize vc=_vc;
- (void)layoutSubviews;
- (id)findViewController;
- (void)attachParentViewController;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (void)onAttachViewController:(id)arg1;
- (void)attachLiteAppView:(id)arg1;
- (void)selectAlbum:(id)arg1;
- (void)initAlbumView;
- (void)dealloc;
- (id)init;

@end

