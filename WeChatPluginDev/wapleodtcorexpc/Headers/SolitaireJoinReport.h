//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface SolitaireJoinReport
{
    unsigned int _addCount;
    unsigned int _removeCount;
    unsigned long long _editScene;
    NSString *_nsPunctuation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsPunctuation; // @synthesize nsPunctuation=_nsPunctuation;
@property(nonatomic) unsigned long long editScene; // @synthesize editScene=_editScene;
@property(nonatomic) unsigned int removeCount; // @synthesize removeCount=_removeCount;
@property(nonatomic) unsigned int addCount; // @synthesize addCount=_addCount;
- (void)report;

@end

