//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCPayGetUserExInfoCgiResponse : NSObject
{
    _Bool _needArea;
    _Bool _needProfession;
    _Bool _needNationality;
    NSArray *_professions;
    NSArray *_nationalityExcludeArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *nationalityExcludeArray; // @synthesize nationalityExcludeArray=_nationalityExcludeArray;
@property(nonatomic) _Bool needNationality; // @synthesize needNationality=_needNationality;
@property(retain, nonatomic) NSArray *professions; // @synthesize professions=_professions;
@property(nonatomic) _Bool needProfession; // @synthesize needProfession=_needProfession;
@property(nonatomic) _Bool needArea; // @synthesize needArea=_needArea;

@end

