//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCCanvasComponentScrollGroupInfo
{
    NSArray *_componentItemList;
    NSString *_indicatorColor;
    NSString *_currentIndicatorColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentIndicatorColor; // @synthesize currentIndicatorColor=_currentIndicatorColor;
@property(retain, nonatomic) NSString *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(retain, nonatomic) NSArray *componentItemList; // @synthesize componentItemList=_componentItemList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

