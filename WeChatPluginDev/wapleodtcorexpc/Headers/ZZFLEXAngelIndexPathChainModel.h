//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSArray;

@interface ZZFLEXAngelIndexPathChainModel : NSObject
{
    NSArray *_listData;
}

@property(retain, nonatomic) NSArray *listData; // @synthesize listData=_listData;
- (CDUnknownBlockType)bySectionTagAndDataModel;
- (CDUnknownBlockType)byDataModel;
- (CDUnknownBlockType)bySectionTagAndViewTag;
- (CDUnknownBlockType)byViewTag;
- (id)initWithListData:(id)arg1;

@end
