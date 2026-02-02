//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FTSMultiContactResultWrap : NSObject
{
    BOOL _resultType;
    NSString *_keyword;
    NSArray *_arrResultContact;
    NSDictionary *_dicSearchMatchTip;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dicSearchMatchTip; // @synthesize dicSearchMatchTip=_dicSearchMatchTip;
@property(retain, nonatomic) NSArray *arrResultContact; // @synthesize arrResultContact=_arrResultContact;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) BOOL resultType; // @synthesize resultType=_resultType;

@end

