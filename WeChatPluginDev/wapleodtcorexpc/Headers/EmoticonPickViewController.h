//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCustomManageAddLogic, NSData, NSString, UIImage, UIImageView, UIView;

@interface EmoticonPickViewController
{
    NSData *m_imageData;
    UIImage *m_image;
    UIView *m_emoticonBkgView;
    NSString *m_localMd5;
    UIImageView *_m_imageView;
    EmoticonCustomManageAddLogic *_addEmoticonLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic; // @synthesize addEmoticonLogic=_addEmoticonLogic;
@property(retain, nonatomic) UIImageView *m_imageView; // @synthesize m_imageView=_m_imageView;
@property(retain, nonatomic) NSString *m_localMd5; // @synthesize m_localMd5;
@property(retain, nonatomic) UIView *m_emoticonBkgView; // @synthesize m_emoticonBkgView;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (void)viewDidLoad;
- (void)Confirm;
- (void)Cancel;
- (void)showTipsAndQuit:(id)arg1;
- (void)initToolBar;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;

@end

