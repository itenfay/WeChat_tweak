//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCImageSearchEntity;

@interface MMImageActionSearchItem
{
    WCImageSearchEntity *_searchEntity;
}

@property(retain, nonatomic) WCImageSearchEntity *searchEntity; // @synthesize searchEntity=_searchEntity;
- (void)handleWithImage;
- (id)init;

@end

