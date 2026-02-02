//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BTRecommendFinderDataWrapper : NSObject
{
    int _subType;
    NSArray *_finderDataArr;
    NSString *_cardId;
    NSString *_title;
    NSString *_fromSessionIdInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fromSessionIdInfo; // @synthesize fromSessionIdInfo=_fromSessionIdInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSArray *finderDataArr; // @synthesize finderDataArr=_finderDataArr;
@property(nonatomic) int subType; // @synthesize subType=_subType;
- (id)recFinderCardDataArr;
- (_Bool)isValid;

@end

