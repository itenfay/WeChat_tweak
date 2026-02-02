//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderGetLiveGloryListSuccessModel : NSObject
{
    unsigned int _liveContactsMaxDisplayCount;
    NSMutableArray *_liveContacts;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int liveContactsMaxDisplayCount; // @synthesize liveContactsMaxDisplayCount=_liveContactsMaxDisplayCount;
@property(retain, nonatomic) NSMutableArray *liveContacts; // @synthesize liveContacts=_liveContacts;

@end

