//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatroomMsgApp, JumpInfo, NSString;

@interface GCTeamUpCellModel
{
    NSString *_backgroundImgUrl;
    NSString *_topTitle;
    NSString *_midesc;
    NSString *_bottomStatus;
    double _bottomImageWidth;
    NSString *_bottomImageUrl;
    NSString *_rightBtnTitle;
    JumpInfo *_jumpInfo;
    ChatroomMsgApp *_msgApp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatroomMsgApp *msgApp; // @synthesize msgApp=_msgApp;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSString *rightBtnTitle; // @synthesize rightBtnTitle=_rightBtnTitle;
@property(retain, nonatomic) NSString *bottomImageUrl; // @synthesize bottomImageUrl=_bottomImageUrl;
@property(nonatomic) double bottomImageWidth; // @synthesize bottomImageWidth=_bottomImageWidth;
@property(retain, nonatomic) NSString *bottomStatus; // @synthesize bottomStatus=_bottomStatus;
@property(retain, nonatomic) NSString *midesc; // @synthesize midesc=_midesc;
@property(retain, nonatomic) NSString *topTitle; // @synthesize topTitle=_topTitle;
@property(retain, nonatomic) NSString *backgroundImgUrl; // @synthesize backgroundImgUrl=_backgroundImgUrl;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (Class)bindCellClass;
- (id)initWithChatroomMessage:(id)arg1;

@end

