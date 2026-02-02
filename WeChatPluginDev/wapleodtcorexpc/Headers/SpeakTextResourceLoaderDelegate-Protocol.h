//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SpeakTextResourceLoader;

@protocol SpeakTextResourceLoaderDelegate <NSObject>
- (void)resourceLoader:(SpeakTextResourceLoader *)arg1 didGetPieceAtIndex:(unsigned int)arg2;
- (void)resourceLoader:(SpeakTextResourceLoader *)arg1 failToGetPieceAtIndex:(unsigned int)arg2;
@end

