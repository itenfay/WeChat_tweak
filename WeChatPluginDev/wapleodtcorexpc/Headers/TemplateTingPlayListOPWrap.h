//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateTingPlayListOPWrap : NSObject
{
    unsigned int _type;
    unsigned int _listType;
    NSString *_categoryId;
    NSString *_name;
    NSString *_cover;
    NSString *_subTitle;
    NSString *_generalString;
}

+ (id)tingPlaylistOPWrapWithJSON:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *generalString; // @synthesize generalString=_generalString;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int listType; // @synthesize listType=_listType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (id)toCategoryItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

