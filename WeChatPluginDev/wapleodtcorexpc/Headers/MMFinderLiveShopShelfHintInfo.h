//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderShopShelfHintInfo;

@interface MMFinderLiveShopShelfHintInfo : NSObject
{
    FinderShopShelfHintInfo *_pb;
    long long _type;
}

+ (id)infoWithPB:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) FinderShopShelfHintInfo *pb; // @synthesize pb=_pb;
- (id)initWithPB:(id)arg1;

@end

