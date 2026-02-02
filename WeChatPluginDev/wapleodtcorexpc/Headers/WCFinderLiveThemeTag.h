//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveThemeTag : NSObject
{
    unsigned int _containerType;
    NSString *_tagText;
    NSString *_tagValue;
}

+ (id)finderLiveThemeTagFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int containerType; // @synthesize containerType=_containerType;
@property(retain, nonatomic) NSString *tagValue; // @synthesize tagValue=_tagValue;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
- (id)toFinderLiveThemeTag;

@end

