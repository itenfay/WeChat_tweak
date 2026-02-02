//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol DSMMatcherDelegate;

@interface DSMMatcher : NSObject
{
    int _scene;
    unsigned int _groupCount;
    unsigned int _keywordCount;
    unsigned int _keywordMaxLen;
    unsigned int _kwm_length;
    id <DSMMatcherDelegate> _delegate;
    NSString *_modelPath;
    NSData *_mmapData;
    char *_kwm_data;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int kwm_length; // @synthesize kwm_length=_kwm_length;
@property(nonatomic) char *kwm_data; // @synthesize kwm_data=_kwm_data;
@property(retain, nonatomic) NSData *mmapData; // @synthesize mmapData=_mmapData;
@property(nonatomic) unsigned int keywordMaxLen; // @synthesize keywordMaxLen=_keywordMaxLen;
@property(nonatomic) unsigned int keywordCount; // @synthesize keywordCount=_keywordCount;
@property(nonatomic) unsigned int groupCount; // @synthesize groupCount=_groupCount;
@property(retain, nonatomic) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <DSMMatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (id)extractKeywords:(id)arg1 maxSearchCount:(unsigned int)arg2;
- (id)extractKeywords:(id)arg1;
- (int)search:(id)arg1 location:(unsigned int)arg2 result:(id)arg3;
- (_Bool)writeKeywordModel;
- (void)fillKeywordModelData;
- (_Bool)createKeywordModel;
- (unsigned int)initPretreat:(unsigned short *)arg1;
- (void)initMetaData;
- (_Bool)buildModelFromKeywords;
- (_Bool)readModelFromFile;
- (void)buildSearchModel;
- (void)dealloc;
- (id)initWithModelPath:(id)arg1 delegate:(id)arg2 scene:(int)arg3;

@end

