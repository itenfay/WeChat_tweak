//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveAppMsg, NSMutableArray;

@interface MMFinderLiveLikeMsgInfo : NSObject
{
    unsigned int _startMsgId;
    unsigned int _endMsgId;
    unsigned int _likeUvNum;
    NSMutableArray *_userInfoList;
    FinderLiveAppMsg *_rootAppMsg;
}

+ (_Bool)checkLikeLiveMsgInfoPBValid:(id)arg1;
+ (id)createLiveLikeMsgInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveAppMsg *rootAppMsg; // @synthesize rootAppMsg=_rootAppMsg;
@property(nonatomic) unsigned int likeUvNum; // @synthesize likeUvNum=_likeUvNum;
@property(retain, nonatomic) NSMutableArray *userInfoList; // @synthesize userInfoList=_userInfoList;
@property(nonatomic) unsigned int endMsgId; // @synthesize endMsgId=_endMsgId;
@property(nonatomic) unsigned int startMsgId; // @synthesize startMsgId=_startMsgId;
- (_Bool)isMsgIdRangeEqual:(id)arg1;
- (id)description;

@end

