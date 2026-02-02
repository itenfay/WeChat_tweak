//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface FinderLiveQuickReplyWordingInfo : NSObject
{
    unsigned int _flag;
    NSMutableArray *_modelList;
    NSString *_wording;
}

+ (id)changeQuickReplyModelFromInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSMutableArray *modelList; // @synthesize modelList=_modelList;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)getModelListWithWordList:(id)arg1;
- (id)initWithFinderWordingInfo:(id)arg1;

@end

