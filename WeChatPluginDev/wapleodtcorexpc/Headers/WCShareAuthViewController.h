//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, OpenApiParameter, UIButton, UIImageView, UIView;
@protocol WCShareAuthViewControllerDelegate;

@interface WCShareAuthViewController
{
    _Bool bIsFromSysCopy;
    int _type;
    unsigned int _msgType;
    unsigned int _msgSubType;
    id <WCShareAuthViewControllerDelegate> _delegate;
    NSString *_appName;
    NSString *_extText;
    NSString *_extUrl;
    NSString *_desc;
    NSString *_appBrandUserName;
    NSString *_appBrandPath;
    NSString *_userOpenId;
    NSString *_songAlbumUrl;
    UIView *_scrollView;
    UIView *_errView;
    UIImageView *_errIconImgView;
    MMUILabel *_detailLabel;
    UIButton *_backBtn;
    OpenApiParameter *_openParam;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenApiParameter *openParam; // @synthesize openParam=_openParam;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIImageView *errIconImgView; // @synthesize errIconImgView=_errIconImgView;
@property(retain, nonatomic) UIView *errView; // @synthesize errView=_errView;
@property(retain, nonatomic) UIView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *songAlbumUrl; // @synthesize songAlbumUrl=_songAlbumUrl;
@property(retain, nonatomic) NSString *userOpenId; // @synthesize userOpenId=_userOpenId;
@property(retain, nonatomic) NSString *appBrandPath; // @synthesize appBrandPath=_appBrandPath;
@property(retain, nonatomic) NSString *appBrandUserName; // @synthesize appBrandUserName=_appBrandUserName;
@property(nonatomic) unsigned int msgSubType; // @synthesize msgSubType=_msgSubType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *extUrl; // @synthesize extUrl=_extUrl;
@property(retain, nonatomic) NSString *extText; // @synthesize extText=_extText;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) __weak id <WCShareAuthViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bIsFromSysCopy; // @synthesize bIsFromSysCopy;
- (void)reportTranslateLinkFail:(id)arg1 result:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)layoutErrorView;
- (void)showErrorView:(id)arg1;
- (void)checkIfNeedUpdateAppDataFromServer:(id)arg1 version:(unsigned int)arg2;
- (void)sendAuthRequest;
- (void)didNeedRedirectUrlWithResult:(id)arg1;
- (void)didNeedRefreshTokenWithResult:(id)arg1;
- (_Bool)checkMusicFieldOptions;
- (_Bool)checkOpensdkFieldOptions;
- (void)didFail:(id)arg1;
- (void)didSuccessWithResult:(id)arg1;
- (void)goBack;
- (void)onBackBtnClick:(id)arg1;
- (id)getType;
- (id)makeStateDeepLinkParam;
- (id)makeLink;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (id)initWithType:(int)arg1 openParam:(id)arg2 txt:(id)arg3 url:(id)arg4 msgType:(unsigned int)arg5 msgSubType:(unsigned int)arg6 desc:(id)arg7 songAlbumUrl:(id)arg8 extraData:(id)arg9;
- (id)initWithType:(int)arg1 openParam:(id)arg2 txt:(id)arg3 url:(id)arg4 msgType:(unsigned int)arg5 desc:(id)arg6 songAlbumUrl:(id)arg7 extraData:(id)arg8;
- (id)initWithType:(int)arg1 openParam:(id)arg2 txt:(id)arg3 url:(id)arg4 msgType:(unsigned int)arg5 desc:(id)arg6 extraData:(id)arg7;
- (id)initWithType:(int)arg1 openParam:(id)arg2 txt:(id)arg3 url:(id)arg4 msgType:(unsigned int)arg5 songAlbumUrl:(id)arg6;
- (id)initWithType:(int)arg1 openParam:(id)arg2 txt:(id)arg3 url:(id)arg4 msgType:(unsigned int)arg5;

@end

