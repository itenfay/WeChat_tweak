//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LSTargetGenerator, NSString;

@interface LSMatchTypeConfig : NSObject
{
    unsigned int _matchType;
    unsigned int _matchSubType;
    LSTargetGenerator *_targetGenerator;
    NSString *_nsMatchDesc;
}

+ (id)matchType:(unsigned int)arg1 subType:(unsigned int)arg2 target:(id)arg3 desc:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsMatchDesc; // @synthesize nsMatchDesc=_nsMatchDesc;
@property(retain, nonatomic) LSTargetGenerator *targetGenerator; // @synthesize targetGenerator=_targetGenerator;
@property(nonatomic) unsigned int matchSubType; // @synthesize matchSubType=_matchSubType;
@property(nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
- (_Bool)applyRule:(int)arg1;

@end

