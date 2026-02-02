//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TPAppleDefinitionUtil : NSObject
{
    NSMutableDictionary *_playerDefinitionMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *playerDefinitionMap; // @synthesize playerDefinitionMap=_playerDefinitionMap;
- (int)getDefinitionByDefLevel:(int)arg1;
- (long long)getHeightByDefLevel:(int)arg1;
- (long long)getWidthByDefLevel:(int)arg1;
- (void)addDefinitionMapNodeWithLevel:(int)arg1 definition:(int)arg2 width:(long long)arg3 height:(long long)arg4;
- (id)init;

@end

