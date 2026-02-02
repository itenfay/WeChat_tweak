//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WeChatEmotionSectionInfo
{
    unsigned long long _sectionType;
    long long _numOfItems;
    long long _scene;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) long long numOfItems; // @synthesize numOfItems=_numOfItems;
@property(nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;

@end

