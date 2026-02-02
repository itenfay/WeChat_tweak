//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveAudiencePromoteInfo, NSArray, NSData;

@interface MMFinderLiveSyncPromoteModel : NSObject
{
    _Bool _needReplace;
    NSData *_syncContext;
    NSArray *_promoteInfoList;
    MMFinderLiveAudiencePromoteInfo *_promoteInfo;
}

+ (id)getPromoteInfoListWithPromoteInfoListResp:(id)arg1;
+ (id)getLiveSyncPromoteModelWithPromoteInfoListResp:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveAudiencePromoteInfo *promoteInfo; // @synthesize promoteInfo=_promoteInfo;
@property(retain, nonatomic) NSArray *promoteInfoList; // @synthesize promoteInfoList=_promoteInfoList;
@property(retain, nonatomic) NSData *syncContext; // @synthesize syncContext=_syncContext;
@property(nonatomic) _Bool needReplace; // @synthesize needReplace=_needReplace;

@end

