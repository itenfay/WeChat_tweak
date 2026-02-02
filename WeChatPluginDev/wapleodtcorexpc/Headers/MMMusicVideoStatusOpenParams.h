//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicMVSongInfo, MMMusicShareItem;

@interface MMMusicVideoStatusOpenParams : NSObject
{
    MMMusicMVSongInfo *_mvSongInfo;
    MMMusicShareItem *_shareItem;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) MMMusicMVSongInfo *mvSongInfo; // @synthesize mvSongInfo=_mvSongInfo;
- (id)toXML;

@end

