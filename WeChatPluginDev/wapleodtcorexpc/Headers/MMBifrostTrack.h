//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MMBifrostTrack : NSObject
{
    NSString *_protocolName;
    NSString *_selectorName;
    CDUnknownBlockType _clearCallback;
    NSMutableDictionary *_sourceToTargetsDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sourceToTargetsDict; // @synthesize sourceToTargetsDict=_sourceToTargetsDict;
@property(copy, nonatomic) CDUnknownBlockType clearCallback; // @synthesize clearCallback=_clearCallback;
@property(copy, nonatomic) NSString *selectorName; // @synthesize selectorName=_selectorName;
@property(copy, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
- (id)cacheTargetsForSource:(id)arg1;
- (void)cacheTargets:(id)arg1 forSource:(id)arg2;
- (id)initWithProtocolName:(id)arg1 selectorName:(id)arg2;
- (id)init;

@end

