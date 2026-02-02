//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMegaVideoBulletComment : NSObject
{
    int _extFlag;
    unsigned long long _commentId;
    NSString *_content;
    unsigned long long _videoTimestamp;
    unsigned long long _createTime;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_videoTimestamp;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_commentId;
- (void).cxx_destruct;
@property(nonatomic) int extFlag; // @synthesize extFlag=_extFlag;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long videoTimestamp; // @synthesize videoTimestamp=_videoTimestamp;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long commentId; // @synthesize commentId=_commentId;
- (id)bulletItem;
- (_Bool)isBothMineAndAuthor;
- (_Bool)isAuthor;
- (_Bool)isMine;
- (double)appearPoint;
@property(readonly, copy) NSString *description;
- (id)initWithMegaVideoBulletCommentInfo:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

