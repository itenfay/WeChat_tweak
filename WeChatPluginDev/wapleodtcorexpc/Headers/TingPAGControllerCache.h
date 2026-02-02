//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TingPAGControllerCache : NSObject
{
    NSMutableDictionary *_dictControllerCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictControllerCache; // @synthesize dictControllerCache=_dictControllerCache;
- (id)getOrCreatePAGCoverController:(id)arg1;
- (_Bool)canUsePAGCover:(id)arg1;
- (id)init;

@end

