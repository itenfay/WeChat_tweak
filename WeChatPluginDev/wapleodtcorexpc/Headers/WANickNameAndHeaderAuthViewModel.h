//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSMutableArray, WANicknameAndHeadAuthorizeSheetInfo;
@protocol IWANicknameAndHeadAuthorizePageSheet;

@interface WANickNameAndHeaderAuthViewModel : NSObject
{
    NSMutableArray *_avatarList;
    CDUnknownBlockType _scrollToAvatarAction;
    double _maxListHeight;
}

@property(nonatomic) double maxListHeight; // @synthesize maxListHeight=_maxListHeight;
@property(copy, nonatomic) CDUnknownBlockType scrollToAvatarAction; // @synthesize scrollToAvatarAction=_scrollToAvatarAction;
@property(retain, nonatomic) NSMutableArray *avatarList; // @synthesize avatarList=_avatarList;

// Remaining properties
@property(retain, nonatomic) WANicknameAndHeadAuthorizeSheetInfo *infoModel; // @dynamic infoModel;
@property(nonatomic) __weak id <IWANicknameAndHeadAuthorizePageSheet> pageSheet; // @dynamic pageSheet;

@end
