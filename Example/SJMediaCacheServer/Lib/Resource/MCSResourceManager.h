//
//  MCSResourceManager.h
//  SJMediaCacheServer_Example
//
//  Created by BlueDancer on 2020/6/3.
//  Copyright © 2020 changsanjiang@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MCSURLConvertor.h"
@class MCSResource, MCSResourcePartialContent;

NS_ASSUME_NONNULL_BEGIN

@interface MCSResourceManager : NSObject
+ (instancetype)shared;

@property (nonatomic, strong, readonly) MCSURLConvertor *convertor;

- (MCSResource *)resourceWithURL:(NSURL *)URL;

- (void)update:(MCSResource *)resource;
@end

NS_ASSUME_NONNULL_END
