//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EnterpriseSearchContactCellData : NSObject
{
    unsigned int _matchField;
    NSString *_userName;
    NSString *_displayName;
    NSString *_headImageUrl;
    NSString *_matchText;
    NSArray *_keywords;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *matchText; // @synthesize matchText=_matchText;
@property(nonatomic) unsigned int matchField; // @synthesize matchField=_matchField;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

