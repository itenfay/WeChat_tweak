//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ChatroomMsgPack, MMAsset, NSString, UIImage;
@protocol GCImgMsgWrapperDelegate;

@interface GCImageMsgWrapper : NSObject
{
    _Bool _isUPload;
    unsigned int _m_uiPercent;
    id <GCImgMsgWrapperDelegate> _delegate;
    MMAsset *_mmAsset;
    UIImage *_defaultThumbImage;
    UIImage *_donloadedThumbImage;
    NSString *_nsAesKey;
    NSString *_midImgUrl;
    NSString *_md5;
    ChatroomMsgPack *_msgPack;
    NSString *_chatRoomName;
    NSString *_cdnKey;
    long long _uploadStage;
    long long _imgCdnStatus;
    struct CGSize _midImgSize;
    struct CGSize _thumbSize;
}

+ (id)imageWrapperFromImage:(id)arg1 imageData:(id)arg2 chatRoomMsgPack:(id)arg3 nsAesKey:(id)arg4 chatRoomName:(id)arg5;
+ (id)getChatRoomImgDirOfChatroom:(id)arg1;
+ (id)getChatRoomPathComponent:(id)arg1;
+ (id)getChatRoomImgDir;
+ (void)deleteImgDirOfchatRoomName:(id)arg1;
+ (void)deleteChatRoomImgDir;
+ (id)msgWrapperFromMsgPack:(id)arg1 oAsset:(id)arg2 chatRoomName:(id)arg3;
+ (id)imgWrapFromMsgPack:(id)arg1 chatRoomName:(id)arg2;
+ (id)createChatroomMsgImageWithImgWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long imgCdnStatus; // @synthesize imgCdnStatus=_imgCdnStatus;
@property(nonatomic) unsigned int m_uiPercent; // @synthesize m_uiPercent=_m_uiPercent;
@property(nonatomic) long long uploadStage; // @synthesize uploadStage=_uploadStage;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey=_cdnKey;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(nonatomic) _Bool isUPload; // @synthesize isUPload=_isUPload;
@property(retain, nonatomic) ChatroomMsgPack *msgPack; // @synthesize msgPack=_msgPack;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) struct CGSize midImgSize; // @synthesize midImgSize=_midImgSize;
@property(retain, nonatomic) NSString *midImgUrl; // @synthesize midImgUrl=_midImgUrl;
@property(retain, nonatomic) NSString *nsAesKey; // @synthesize nsAesKey=_nsAesKey;
@property(retain, nonatomic) UIImage *donloadedThumbImage; // @synthesize donloadedThumbImage=_donloadedThumbImage;
@property(retain, nonatomic) UIImage *defaultThumbImage; // @synthesize defaultThumbImage=_defaultThumbImage;
@property(retain, nonatomic) MMAsset *mmAsset; // @synthesize mmAsset=_mmAsset;
@property(nonatomic) __weak id <GCImgMsgWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnCdnUpload:(id)arg1;
- (_Bool)checkClientMsgIdMatch:(id)arg1;
- (void)showToastForImageFail:(id)arg1;
- (_Bool)handleImageGenerated:(id)arg1 imageData:(id)arg2;
- (_Bool)triggerReSendImage;
- (_Bool)uploadImage;
- (id)genThumbImageFromImage:(id)arg1;
- (id)genThumbImageFromImgPath;
- (_Bool)isMidImgExist;
- (_Bool)isThumbImageExist;
- (id)getMesImgOfMsgPack:(id)arg1;
- (id)getMaskedThumImgPathOfMsgPack:(id)arg1;
- (id)fileNameOfMsgPack:(id)arg1;
- (id)getImgThumbDirOfMsgPack:(id)arg1;
- (id)getChatRoomImgDirOfMsgPack:(id)arg1;
- (id)getCurrentChatRoomPathOfSubPathComponent:(id)arg1;
- (id)getCurrentChatRoomPathComponent;
- (id)description;
- (id)statusDesc;
@property(readonly, nonatomic) NSString *imgPath;
@property(readonly, nonatomic) NSString *thumPath;
- (void)createCdnKey;
- (id)init;

@end

