//
//  GTDiff+Private.h
//  ObjectiveGitFramework
//
//  Created by Justin Spahr-Summers on 2014-06-27.
//  Copyright (c) 2014 GitHub, Inc. All rights reserved.
//

#import "GTDiff.h"

@interface GTDiff ()

/// Parses a dictionary of diff options into a `git_diff_options` struct, then
/// provides a pointer to that structure to the given `block`.
///
/// Returns the result of invoking `block`.
+ (int)handleParsedOptionsDictionary:(NSDictionary * _Nullable)dictionary usingBlock:(int (^ _Nonnull)(git_diff_options * _Null_unspecified optionsStruct))block;

@end
