//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatroomData, NSString, UIColor;
@protocol GCBaseGroupCellModelDelegate;

@interface GCBaseGroupCellModel
{
    _Bool _showRedDot;
    id <GCBaseGroupCellModelDelegate> _groupCellModelDelegate;
    NSString *_groupIconUrl;
    NSString *_groupName;
    NSString *_groupUserName;
    UIColor *_midStrongNoticeColor;
    NSString *_midStrongNoticeText;
    NSString *_midDescText;
    NSString *_bottomDescText;
    NSString *_gameId;
    ChatroomData *_chatroomData;
}

+ (struct CGRect)getAnimationFromPosFromViewManager:(id)arg1 identifier:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ChatroomData *chatroomData; // @synthesize chatroomData=_chatroomData;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(retain, nonatomic) NSString *gameId; // @synthesize gameId=_gameId;
@property(retain, nonatomic) NSString *bottomDescText; // @synthesize bottomDescText=_bottomDescText;
@property(retain, nonatomic) NSString *midDescText; // @synthesize midDescText=_midDescText;
@property(retain, nonatomic) NSString *midStrongNoticeText; // @synthesize midStrongNoticeText=_midStrongNoticeText;
@property(retain, nonatomic) UIColor *midStrongNoticeColor; // @synthesize midStrongNoticeColor=_midStrongNoticeColor;
@property(retain, nonatomic) NSString *groupUserName; // @synthesize groupUserName=_groupUserName;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *groupIconUrl; // @synthesize groupIconUrl=_groupIconUrl;
@property(nonatomic) __weak id <GCBaseGroupCellModelDelegate> groupCellModelDelegate; // @synthesize groupCellModelDelegate=_groupCellModelDelegate;
- (double)tagLineGroupMaxWidthForWidth:(double)arg1;
- (double)rightSpace;
- (double)imgViewHeight;
- (double)groupCellHeight;
- (struct CGSize)cellSizeForCollectionView:(id)arg1;
- (void)openGameChatRoomWithConfig:(id)arg1 imgView:(id)arg2;
- (void)configureReportModel:(id)arg1;

@end

