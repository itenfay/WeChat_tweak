//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QrcLyricParser;

@interface QrcLyricParserWapper : NSObject
{
    QrcLyricParser *_qrcLyricParser;
    QrcLyricParser *_luomaQrcLyricParser;
}

+ (id)sharedQrcLyricParserWapper;
- (void).cxx_destruct;
@property(retain, nonatomic) QrcLyricParser *luomaQrcLyricParser; // @synthesize luomaQrcLyricParser=_luomaQrcLyricParser;
@property(retain, nonatomic) QrcLyricParser *qrcLyricParser; // @synthesize qrcLyricParser=_qrcLyricParser;
- (id)init;

@end

