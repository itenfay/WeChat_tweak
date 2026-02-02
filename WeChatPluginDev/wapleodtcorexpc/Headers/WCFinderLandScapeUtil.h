//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLandScapeUtil : NSObject
{
}

+ (struct WCShowArea)getPlayerViewShowAreaWithMediaInfo:(id)arg1 isLandScape:(_Bool)arg2;
+ (struct CGRect)mediaFrameWithMediaInfo:(id)arg1 containerSize:(struct CGSize)arg2 isLandScape:(_Bool)arg3 isSubScene:(_Bool)arg4 attrFuncFlag:(unsigned int)arg5;
+ (struct CGPoint)mediaPositionithMediaInfo:(id)arg1 containerSize:(struct CGSize)arg2 targetSize:(struct CGSize)arg3 isLandScape:(_Bool)arg4 isSubScene:(_Bool)arg5 attrFuncFlag:(unsigned int)arg6;

@end

