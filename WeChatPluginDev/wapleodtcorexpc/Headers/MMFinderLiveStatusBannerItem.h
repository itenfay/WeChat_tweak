//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIView;

@interface MMFinderLiveStatusBannerItem : NSObject
{
    unsigned int _type;
    MMUIView *_view;
}

+ (id)buildStatusBannerItem:(unsigned int)arg1 view:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *view; // @synthesize view=_view;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

