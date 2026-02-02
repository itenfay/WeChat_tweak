//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCommonReddotSyncRequest, NSData, NSString;

@interface FinderCommonReddotSyncTask : NSObject
{
    unsigned int _syncScene;
    unsigned int _locationAuthScene;
    NSString *_finderUsername;
    NSData *_reliableNotifyBuff;
    NSString *_contextId;
    FinderCommonReddotSyncRequest *_request;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderCommonReddotSyncRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(retain, nonatomic) NSData *reliableNotifyBuff; // @synthesize reliableNotifyBuff=_reliableNotifyBuff;
@property(nonatomic) unsigned int locationAuthScene; // @synthesize locationAuthScene=_locationAuthScene;
@property(nonatomic) unsigned int syncScene; // @synthesize syncScene=_syncScene;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;

@end

